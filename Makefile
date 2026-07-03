.PHONY: clean All

All:
	@echo "==========Building project:[ my_new_workspace2 - Debug ]=========="
	@cd "my_new_workspace2" && "$(MAKE)" -f  "my_new_workspace2.mk"
clean:
	@echo "==========Cleaning project:[ my_new_workspace2 - Debug ]----------"
	@cd "my_new_workspace2" && "$(MAKE)" -f  "my_new_workspace2.mk" clean
