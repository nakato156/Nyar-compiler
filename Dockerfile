FROM archlinux:base-devel
WORKDIR /TrabajoFinal

#Install packages
RUN pacman -Syu --noconfirm
RUN pacman -S git clang cmake python jdk-openjdk antlr4 antlr4-runtime --noconfirm

#Install LLVM
WORKDIR /TrabajoFinal
RUN git clone --depth 1 https://github.com/llvm/llvm-project.git
WORKDIR /TrabajoFinal/llvm-project
RUN cmake -S llvm -B build -G "Unix Makefiles" -DLLVM_ENABLE_PROJECTS="" -DLLVM_ENABLE_RTTI=ON -DCMAKE_BUILD_TYPE=Release -DLLVM_PARALLEL_COMPILE_JOBS=8 
RUN cmake --build build -j 20
WORKDIR /TrabajoFinal/llvm-project/build
RUN make install
RUN make clean

#Install AUR
ENV AUR_USER=ab
WORKDIR /AUR
RUN git clone https://github.com/greyltc-org/docker-archlinux-aur/
WORKDIR /AUR/docker-archlinux-aur
RUN chmod +x add-aur.sh
RUN ./add-aur.sh "${AUR_USER}"

#Install swift
RUN aur-install swift-bin
RUN pacman -S libc++ --noconfirm

#Make the source file
ENV ANTLRRUNTIMEH=/usr/include/antlr4-runtime
ENV ANTLRRUNTIME=/build/runtime

ENV CLASSPATH=.:/usr/share/java/antlr-4.13.2-complete.jar

ENV antlr4='java org.antlr.v4.Tool'
ENV grun='java org.antlr.v4.gui.TestRig'

WORKDIR /TrabajoFinal/Github/