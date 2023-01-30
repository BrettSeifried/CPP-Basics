.PHONY: clean All

All:
	@echo "----------Building project:[ Variables - Debug ]----------"
	@cd "Variables" && "$(MAKE)" -f  "Variables.mk"
clean:
	@echo "----------Cleaning project:[ Variables - Debug ]----------"
	@cd "Variables" && "$(MAKE)" -f  "Variables.mk" clean
