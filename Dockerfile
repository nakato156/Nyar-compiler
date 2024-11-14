FROM archlinux:base-devel-20241020.0.271562
WORKDIR /TrabajoFinal

#Install packages
RUN pacman -Syu --noconfirm
RUN pacman -S git clang cmake python jdk-openjdk antlr4 antlr4-runtime --noconfirm

#Install LLVM
WORKDIR /TrabajoFinal
RUN git clone --depth 1 https://github.com/llvm/llvm-project.git
WORKDIR /TrabajoFinal/llvm-project
RUN cmake -S llvm -B build \
        -G "Unix Makefiles" \
        -DLLVM_ENABLE_PROJECTS="" \
        -DLLVM_ENABLE_RTTI=ON \
        -DCMAKE_BUILD_TYPE=Release \
        -DLLVM_PARALLEL_COMPILE_JOBS=8 
RUN cmake --build build -j 20
WORKDIR /TrabajoFinal/llvm-project/build
RUN make install

ENV DISPLAY=:0

RUN pacman -Syu sdl2 sdl2_image --noconfirm

#Make the source file
ENV ANTLRRUNTIMEH=/usr/include/antlr4-runtime
ENV ANTLRRUNTIME=/build/runtime

ENV CLASSPATH=.:/usr/share/java/antlr-4.13.2-complete.jar

ENV antlr4='java org.antlr.v4.Tool'
ENV grun='java org.antlr.v4.gui.TestRig'

WORKDIR /TrabajoFinal/Github/