Gotcha! Here’s a polished, easy-to-copy markdown README with your new info integrated and grammar fixed — chill, clear, and solid:

````markdown
# Console Bank System (OOP-based)

> A somewhat basic banking system console app that uses OOP, a relatively good file structure, some encryption, CRUD operations, admin, users and clients management, logs, splitting code into libraries that call each other, permissions — there's a lot actually to cover.  
> I haven't touched this repo in about 3 months, but that's what it does in general. I didn't comment much in my code, but I hope it's understandable.  
> Maybe I should refactor it a bit.

---

## Why It's One Commit

Okay, so it might seem weird that there's only **1 commit**, but that's because I was originally committing this to another repo:

👉 [cpp-learning-journey](https://github.com/Yui13KH/cpp-learning-journey)

I didn’t expect it would grow this much and become a full console app, so I’m now moving it to its own repo.

For the **exact commits**, check this folder:

📂 [`OOP Applications`](https://github.com/Yui13KH/cpp-learning-journey/tree/main/OOP%20Applications)

In the commit history, you’ll see the `BankSystem` commits related to this.

---

## What’s New

- Switched to CMake build system instead of manual `g++` commands with long relative paths.

---

## TODO 

- Migrated from `.txt` files to an SQLite database for safer, easier data management.  

---

## Features

- Manage **clients** with email, account number, phone number, account balance, and PIN code.  
- CRUD (Create, Read, Update, Delete) operations on clients — as an admin or user with the right permissions.  
- As admin (`MEOW`), add or delete **users**, assign/manage their permissions.  
- Users can manage clients depending on assigned permissions.  
- A **currency** section with search functionality — search currencies by key or country name and view rates to USD.  
- Perform **deposits, withdrawals, and transfers** between accounts.  
- Full logging for **logins** and **transactions**.  
- Command-line interface with number selections — clear menus and flows.  
- Built with OOP principles and proper file separation for maintainability.

---

## 🛠️ How to Compile

I am using CMake with MinGW/MSYS2.

```bash
mkdir build
cd build
cmake -G "MinGW Makefiles" ..
mingw32-make
````

Then just run the `.exe` (or binary on Linux).

---

## 🔑 Login Info (default admin)

* **Username:** `MEOW` *(yes, it’s capitalized — case matters)*
* **Password:** `1234` *(It seems simple, but it’s encrypted in the database using a Caesar cipher)*

---

## 🧾 User Data Format

For reference, here’s how each line in `Users.txt` was structured before migration:

```
yui#//#Hirasawa#//#Mio@Gmail.com#//#8983883#//#MEOW#//#;<=>#//#255
```

* **First Name**
* **Surname**
* **Email**
* **Phone Number**
* **Username**
* **Password** (Caesar cipher)
* **Permissions** (bitmask)

---

## 🔐 Permissions System

Permissions are stored as a single byte (8-bit number) using **bitwise operators**, where each bit represents a specific permission.

* `1` = permission allowed
* `0` = permission not allowed
* `255` = all permissions (binary `11111111`)
* Example: `3` is `00000011` → only 2 permissions enabled.

Here’s the enum defining each permission bit:

```cpp
enum enPermissions {
    eAll = -1,
    pListClients = 1,
    pAddNewClient = 2,
    pDeleteClient = 4,
    pUpdateClients = 8,
    pFindClient = 16,
    pTransactions = 32,
    pManageUsers = 64,
    pLoginsLog = 128
};
```
