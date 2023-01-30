.PHONY: clean All

All:
	@echo "----------Building project:[ Project1 - Debug ]----------"
	@cd "Section4" && "$(MAKE)" -f  "Project1.mk"
clean:
	@echo "----------Cleaning project:[ Project1 - Debug ]----------"
	@cd "Section4" && "$(MAKE)" -f  "Project1.mk" clean
