.PHONY: clean All

All:
	@echo "----------Building project:[ operators - Debug ]----------"
	@cd "operators" && "$(MAKE)" -f  "operators.mk"
clean:
	@echo "----------Cleaning project:[ operators - Debug ]----------"
	@cd "operators" && "$(MAKE)" -f  "operators.mk" clean
