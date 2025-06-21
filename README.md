# Console Bank System (OOP-based)

> A somewhat basic banking system console app that uses OOP, relatively good file structure, some encryption, CRUD operations, admin, users and clients, logs, splitting code into libraries that call each other, permissions — there's a lot actually to cover.
> I haven't touched this repo in like 3 months, but that's what it does in general. I don't think I commented in my code, but I hope it's understandable.
> Maybe I should refactor it a bit 

---

## Why It's One Commit

Okay, so this might seem weird that it's only **1 commit**, but it's because I was committing this to another repo originally:

👉 [cpp-learning-journey](https://github.com/Yui13KH/cpp-learning-journey)

Didn’t expect it’ll grow this much and become a full console app, so I’m now moving it to its own repo.

For the **exact commits**, it’s in this folder:

📂 [`OOP Applications`](https://github.com/Yui13KH/cpp-learning-journey/tree/main/OOP%20Applications)

In the commit history, you’ll see the `BankSystem` commits are related to this.

---

## 🛠️ How to Compile

I personally compile it using `g++`.

```bash
cd src
g++ BankSystem.cpp -o BankSystem
```

You can change the output name if you want.

Then just run the `.exe` (or binary on Linux).

---

## 🔑 Login Info (default admin)

* **Username:** `MEOW` *(yes it's capitalized, or it won’t work)*
* **Password:** `1234` *(I know it seems stupid but it's supposedly encrypted in the `Users.txt`)*

---

## 🧾 User Data Format

Here's how each line in `Users.txt` is structured:

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

I'm using **bitwise operators** — basically a simple 8-bit number (1 byte), where each bit is a permission.

* `1` = permission allowed
* `0` = permission not allowed
* `255` = all permissions (binary `11111111`)
* Example: `3` is `00000011` → only 2 permissions enabled.

What each bit does is defined in the code as:

```cpp
enum enPermissions {
    eAll = -1,
    pListClients = 1,
    pAddNewClient = 2,
    pDeleteClient = 4,
    pUpdateClients = 8,
    pFindClient = 16,
    pTranactions = 32,
    pManageUsers = 64,
    pLoginsLog = 128
};
```
---
