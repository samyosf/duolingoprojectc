# Nom de l'exécutable final
TARGET = polyglot

# Compilateur
CC = gcc

# Options de compilation (-Wall affiche tous les avertissements pour un code propre)
CFLAGS = -Wall -Wextra -std=c11

# Liste des fichiers sources
SRCS = main.c polyglot.c

# Liste des fichiers objets (générés automatiquement à partir des .c)
OBJS = $(SRCS:.c=.o)

# Règle principale : compile tout
all: $(TARGET)

# Lien entre les objets pour créer l'exécutable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Règle pour transformer chaque .c en .o
%.o: %.c polyglot.h
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers temporaires
clean:
	rm -f $(OBJS) $(TARGET)

# Règle pour tout recommencer (nettoyage + compilation)
re: clean all
