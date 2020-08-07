NAME = libmx.a
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC_FILES:%.c=%.o)))

INC_FILES = $(wildcard $(INC_DIR)/*.h)
CC = clang

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
AR = ar
AFLAGS = rcs
MKDIR = mkdir -p
RM = rm -rf
all: $(NAME)

$(NAME): $(OBJ_FILES)
	@$(AR) $(AFLAGS) $@ $^
	@printf "\033[32mFile\033[0m \033[35mlibmx.a\033[0m \033[32mСreated successfully, have fun=)\033[0m\n"

$(OBJ_FILES): | $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_FILES)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)
	@printf "  \033[32mLoading, Please wait... \033[0m\r"

$(OBJ_DIR):
	@$(MKDIR) $@

clean:
	@$(RM) $(OBJ_DIR)
	@printf "$(OBJ_DIR) in $(NAME)\t \033[32mDeleted\033[0m\n"

uninstall:
	@$(RM) $(OBJ_DIR)
	@$(RM) $(NAME)
	@@printf "$(NAME)\t \033[32mInstalled\033[0m\n"

reinstall: uninstall all

.PHONY: all uninstall clean reinstall