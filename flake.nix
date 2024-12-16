{
  description = "A very basic flake";

  outputs = { self, nixpkgs }: 
  let pkgs = import nixpkgs { system = "x86_64-linux"; };

  in {
    packages.x84_64-linux.default = pkgs.stdenv.mkDerivation {
      name = "c++ shell";
      src = "./.";
      buildInputs = [
        pkgs.clang-tools
      ];
      installPhase = ''
      '';
    };

    devShell.x86_64-linux = pkgs.mkShell {

      packages = [
      pkgs.libgcc
      pkgs.valgrind
      ];

    };
  };
}
