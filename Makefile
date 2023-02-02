.PHONY: clean All

All:
	@echo "----------Building project:[ RealationalOperators - Debug ]----------"
	@cd "RealationalOperators" && "$(MAKE)" -f  "RealationalOperators.mk"
clean:
	@echo "----------Cleaning project:[ RealationalOperators - Debug ]----------"
	@cd "RealationalOperators" && "$(MAKE)" -f  "RealationalOperators.mk" clean
