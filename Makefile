.PHONY: build install uninstall clean

BUILD_DIR := ./build/
INSTALL_DIR := ~/.local/bin/
PROGRAM_BIN := random-name-generator

all: clean build install

build:
	mkdir -p $(BUILD_DIR)
	clang++ -o $(BUILD_DIR)$(PROGRAM_BIN) src/main.cpp

install:
	cp -f $(BUILD_DIR)$(PROGRAM_BIN) $(INSTALL_DIR)

uninstall:
	rm -fv $(INSTALL_DIR)$(PROGRAM_BIN)

clean:
	rm -rf $(BUILD_DIR)
