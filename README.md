# C Language Learning Repo

This repository contains small C programs and experiments while learning the C language.

## Prerequisites

- macOS with a C compiler (clang comes with Xcode Command Line Tools)
- VS Code (recommended) with the “C/C++” extension by Microsoft

Check you have a compiler:

```sh
clang --version
```

If not installed:

```sh
xcode-select --install
```

## Quick start (compile and run)

From the VS Code integrated terminal (or any terminal), in this folder:

Compile a single file and run it:

```sh
# Example for helloworld.c in the repo root
clang helloworld.c -o helloworld
./helloworld
```

If your file is in a subfolder (e.g., `Template/main.c`):

```sh
clang Template/main.c -o Template/main
./Template/main
```

## VS Code: optional build task

You can create a build task to compile the currently open C file:

1. Terminal → Configure Tasks… → Create tasks.json from template → Others
2. Replace the content with:

```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "clang: build active file",
      "type": "shell",
      "command": "clang",
      "args": ["${file}", "-o", "${fileDirname}/${fileBasenameNoExtension}"],
      "group": "build",
      "problemMatcher": ["$gcc"]
    }
  ]
}
```

1. Use Terminal → Run Build Task… (or Cmd+Shift+B) to build the active C file, then run the produced binary from the terminal.

## Tips

- Strings must use double quotes: `printf("Hello, C!\n");`
- End lines with `\n` to avoid the shell prompt appearing on the same line.
- Reading input:

```c
int n; scanf("%d", &n);
```

## Troubleshooting

- `file not found: stdio.h`: ensure Xcode CLT is installed: `xcode-select --install`.
- `permission denied` when running: ensure you run `./programName` (note the `./`).
- No output/newline issues: add `\n` to your printf format strings.
- username@Mac template % chmod +x main
- username@Mac template % ./main
