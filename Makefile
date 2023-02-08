.PHONY: clean All

All:
	@echo "----------Building project:[ Whileloop - Debug ]----------"
	@cd "Whileloop" && "$(MAKE)" -f  "Whileloop.mk"
clean:
	@echo "----------Cleaning project:[ Whileloop - Debug ]----------"
	@cd "Whileloop" && "$(MAKE)" -f  "Whileloop.mk" clean
