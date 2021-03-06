# Marcoin GUI

Copyright (c) 2017-2018, The Marcoin Developers.   
Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.

# License

Marcoin's GUI Wallet is licensed under the "MIT License" for more info, refer to the [License](LICENSE) file.

# Download Releases
https://github.com/marcoinproject/marcoin-gui/releases


# How to build for Ubuntu Linux

```sudo apt-get -y install build-essential libssl-dev libboost-all-dev```

```sudo apt-get -y install gcc-4.8 g++-4.8  git cmake```

```sudo apt-get install qt5-default qttools5-dev-tools```


```git clone https://github.com/marcoinproject/marcoin-gui```

```cd marcoin-gui```

```git submodule add -f https://github.com/marcoinproject/marcoin```

```cp CMakeLists_ubuntu.txt CMakeLists.txt```

```mkdir build ; cd build```

```cmake ..```

```make```

```./MarcoinWallet```



# How to build for Mac OS 

Install Homebrew from here: https://brew.sh/

```mkdir homebrew && curl -L https://github.com/Homebrew/brew/tarball/master | tar xz --strip 1 -C homebrew```

Open a Terminal and type: 

```brew install qt5```

```brew install cmake```

Download a copy of the marcoin-gui source:

```cd /opt```

```git clone https://github.com/marcoinproject/marcoin-gui```

Enter the marcoin-gui directory:

```cd marcoin-gui```

Download the latest marcoin codebase:

```git submodule add -f https://github.com/marcoinproject/marcoin```

Use the correct CMake File

```cp CMakeLists_Mac.txt CMakeLists.txt```

Create a build directory and enter it:

```mkdir build && cd build```

Run the the cmake with your qt5 lib path:

```/opt/homebrew/bin/cmake  -DCMAKE_PREFIX_PATH:STRING='/opt/homebrew/opt/qt5/lib/cmake' ..```

Run make to build the wallet:

```make```

Fix the Links

```/opt/homebrew/opt/qt/bin/macdeployqt MarcoinWallet.app/```


When the build has finished, to copy the Marcoin GUi app into your Application folder type:

```cp -r MarcoinWallet.app ~/Applications```

You can now run the Marcoin GUI from Finder. Make sure that marcoind is running in a terminal window else the GUI will crash on startup.
