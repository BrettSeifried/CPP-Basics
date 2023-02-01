.PHONY: clean All

All:
	@echo "----------Building project:[ OperatorChallenge - Debug ]----------"
	@cd "OperatorChallenge" && "$(MAKE)" -f  "OperatorChallenge.mk"
clean:
	@echo "----------Cleaning project:[ OperatorChallenge - Debug ]----------"
	@cd "OperatorChallenge" && "$(MAKE)" -f  "OperatorChallenge.mk" clean
