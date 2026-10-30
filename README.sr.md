<div align="center">

🇷🇸 **Srpski** · [🇬🇧 English](README.md)


<img src="assets/header.sr.svg" alt="PMF Prijemni ispit - Računarske nauke" width="100%"/>

<a href="https://github.com/MIhajloS07/Faculty-of-Natural-Sciences-and-Mathematics-Computer-science-entrance-exams-programming">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=22&pause=1000&color=38BDF8&center=true&vCenter=true&width=700&lines=Zadaci+sa+prijemnih+ispita+iz+programiranja;Re%C5%A1enja+sa+obja%C5%A1njenjem+korak+po+korak;Priprema+za+PMF+%E2%80%94+Ra%C4%8Dunarske+nauke;Kod+koji+mo%C5%BEe%C5%A1+da+pokrene%C5%A1+i+razume%C5%A1" alt="Typing SVG"/>
</a>

<br/><br/>

![Zadaci](https://img.shields.io/badge/zadaci-TODO-38bdf8?style=for-the-badge)
![C++](https://img.shields.io/badge/C%2B%2B-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![Licenca](https://img.shields.io/badge/licenca-MIT-4ade80?style=for-the-badge)
![Održavanje](https://img.shields.io/badge/odr%C5%BEavanje-aktivno-f472b6?style=for-the-badge)

[![Last commit](https://img.shields.io/github/last-commit/MIhajloS07/Faculty-of-Natural-Sciences-and-Mathematics-Computer-science-entrance-exams-programming?style=flat-square&color=38bdf8)](../../commits)
[![Stars](https://img.shields.io/github/stars/MIhajloS07/Faculty-of-Natural-Sciences-and-Mathematics-Computer-science-entrance-exams-programming?style=flat-square&color=facc15)](../../stargazers)
[![Forks](https://img.shields.io/github/forks/MIhajloS07/Faculty-of-Natural-Sciences-and-Mathematics-Computer-science-entrance-exams-programming?style=flat-square&color=a78bfa)](../../network/members)

**[📚 O projektu](#-o-projektu) · [🗂 Struktura](#-struktura-repozitorijuma) · [🚀 Pokretanje](#-pokretanje) · [🧠 Teme](#-teme-koje-se-pojavljuju) · [🤝 Doprinos](#-doprinos)**

</div>

---

## 📚 O projektu

Ovaj repozitorijum sadrži **zadatke iz programiranja sa prijemnih ispita za studije računarskih nauka na Prirodno-matematičkom fakultetu (PMF)**, zajedno sa rešenjima i objašnjenjima.

Cilj je da budućim studentima olakša pripremu: da vide kako izgledaju zadaci iz godine u godinu, da isprobaju rešenja i da nauče obrasce koji se stalno ponavljaju.

> 💡 **Savet:** Prvo pokušaj da rešiš zadatak sam, pa tek onda otvori rešenje.

### ✨ Šta ćeš ovde naći

- 📝 Tekstove zadataka organizovane po godini i roku
- 💻 Rešenja u kodu, sa komentarima
- 🧩 Objašnjenje ideje i složenosti (vremenske i prostorne)
- ✅ Primere ulaza i izlaza za testiranje
- 🗺 Pregled tema da znaš šta da ponavljaš

---

## 🗂 Struktura repozitorijuma

<!-- TODO: zameni stvarnom strukturom (npr. izlaz komande `tree -L 2`) -->

```text
.
├── assets/                # slike i animacije za README
├── 2023/
│   ├── jun/
│   │   ├── zadatak1/
│   │   │   ├── zadatak.md     # tekst zadatka
│   │   │   ├── resenje.cpp    # C++ rešenje
│   │   │   └── test/          # ulaz1.txt, izlaz1.txt, ...
│   │   └── ...
│   └── septembar/
├── 2024/
├── Makefile               # kompajlira i testira sve
├── run.sh                 # pokreće jedan zadatak
├── .gitignore
├── README.md              # engleski
├── README.sr.md           # srpski
├── CONTRIBUTING.md
└── LICENSE
```

---

## 🚀 Pokretanje

Sve u ovom repozitorijumu je napisano u **C++17**. Potreban ti je samo kompajler (`g++` ili `clang++`).

| OS | Instalacija |
|----|-------------|
| 🐧 Linux | `sudo apt install g++ make` |
| 🍎 macOS | `xcode-select --install` |
| 🪟 Windows | [MSYS2](https://www.msys2.org/) ili WSL, pa `pacman -S mingw-w64-ucrt-x86_64-gcc make` |

**Jedan zadatak, ručno:**

```bash
g++ -std=c++17 -O2 -Wall -Wextra -o resenje resenje.cpp
./resenje < test/ulaz1.txt
```

**Jedan zadatak, preko pomoćne skripte** (kompajlira, pokreće sve testove i poredi izlaz):

```bash
bash run.sh 2023/jun/zadatak1
```

```text
▶ Kompajliram 2023/jun/zadatak1/resenje.cpp ...
✅ test 1 prošao
✅ test 2 prošao
❌ test 3 pao
```

**Ceo repozitorijum:**

```bash
make test     # kompajlira i testira svaki zadatak
make clean    # briše kompajlirane fajlove
```
---

## 🧠 Teme koje se pojavljuju

| Tema | Tipični zadaci | Težina |
|------|----------------|:------:|
| 🔢 Matematika i brojevi | cifre, NZD/NZS, prosti brojevi, deljivost | ⭐ |
| 📦 Nizovi i matrice | C nizovi, `std::vector`, obilazak, rotacija, spiralni ispis | ⭐⭐ |
| 🔤 Stringovi | `std::string`, palindromi, brojanje, transformacije | ⭐⭐ |
| 🔁 Rekurzija | permutacije, kombinacije, backtracking | ⭐⭐⭐ |
| 📊 Sortiranje i pretraga | `std::sort`, komparatori, binarna pretraga | ⭐⭐ |
| 🧮 Dinamičko programiranje | najduži zajednički podniz, ranac | ⭐⭐⭐ |

<!-- TODO: uskladi tabelu sa temama koje stvarno postoje u repou -->

---

## 🗺 Kako se pripremati

```mermaid
flowchart LR
    A[Pročitaj zadatak] --> B[Izdvoji ulaz i izlaz]
    B --> C[Smisli ideju na papiru]
    C --> D[Napiši kod]
    D --> E{Prolazi testove?}
    E -- Ne --> C
    E -- Da --> F[Uporedi sa rešenjem iz repoa]
    F --> G[Zapiši šta si naučio]
```

---

## 📈 Statistika

<!-- TODO: dodaj brojeve ručno ili preko GitHub Action-a -->

| | |
|---|---|
| Ukupno zadataka | TODO |
| Pokriveni rokovi | TODO |
| Jezik | C++17 |

---

## 🤝 Doprinos

Doprinosi su dobrodošli: novi zadaci, bolja rešenja, ispravke grešaka i prevodi.

1. Forkuj repozitorijum
2. Napravi granu: `git checkout -b dodaj-zadatak-2024-jun`
3. Dodaj zadatak u odgovarajući folder i prati postojeću strukturu (`zadatak.md`, `resenje.cpp`, `test/`)
4. Proveri da se kompajlira bez upozorenja i da `make test` prolazi
5. `git commit -m "Dodat zadatak 3 (jun 2024)"`
6. Otvori Pull Request

---

## 📜 Licenca

Kod je pod **MIT** licencom. Tekstovi zadataka pripadaju fakultetu i ovde su navedeni isključivo u edukativne svrhe.

---

<div align="center">

**Ako ti je repozitorijum pomogao, ostavi ⭐**

Napravio [MihajloS07](https://github.com/MIhajloS07)

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=12,14,20&height=120&section=footer" width="100%" alt=""/>

</div>
