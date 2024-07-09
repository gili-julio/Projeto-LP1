# Nome do compilador
CXX = g++

# Opções do compilador
CXXFLAGS = -w -g

# Nome do executável
EXEC = main.exe

# Lista de arquivos fonte
SRCS = main.cpp astronauta.cpp controller.cpp voo.cpp

# Lista de arquivos objeto, gerados a partir dos arquivos fonte
OBJS = $(SRCS:.cpp=.o)

# Regra padrão
all: $(EXEC)

# Regra para compilar o executável
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Regra para compilar os arquivos objeto
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regra para limpar os arquivos gerados
clean:
	del /Q $(OBJS) $(EXEC)

# Instruções adicionais
.PHONY: all clean
