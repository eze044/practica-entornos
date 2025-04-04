name: Windows CI

on: [push, pull_request]

jobs:
  build:
    runs-on: windows-latest
    
    steps:
      - name: Checkout repository
        uses: actions/checkout@v3
      
      - name: Compile main.c
        run: gcc main.c -o main.exe
      
      - name: Run tests
        run: .\main.exe
