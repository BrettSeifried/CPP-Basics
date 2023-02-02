.PHONY: clean All

All:
	@echo "----------Building project:[ OperatorsChallenge - Debug ]----------"
	@cd "OperatorsChallenge" && "$(MAKE)" -f  "OperatorsChallenge.mk"
clean:
	@echo "----------Cleaning project:[ OperatorsChallenge - Debug ]----------"
	@cd "OperatorsChallenge" && "$(MAKE)" -f  "OperatorsChallenge.mk" clean
