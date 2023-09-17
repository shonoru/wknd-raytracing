Intro

This project run in VS code, using following extensions,

- ms-vscode.cpptools
- ms-vscode.cpptools-extension-pack
- twxs.cmake
- ms-vscode.cmake-tools
- formulahendry.code-runner

In settings.json file make changes,

```
"cpp": "cd $dir && g++ -std=c++17 $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
```

Ref. https://stackoverflow.com/a/75291187/995735

To execute build,

```
./main > build/diffuse.ppm
```
