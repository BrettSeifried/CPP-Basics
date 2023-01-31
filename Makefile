.PHONY: clean All

All:
	@echo "----------Building project:[ CarpetCleaningChallenge - Debug ]----------"
	@cd "CarpetCleaningChallenge" && "$(MAKE)" -f  "CarpetCleaningChallenge.mk"
clean:
	@echo "----------Cleaning project:[ CarpetCleaningChallenge - Debug ]----------"
	@cd "CarpetCleaningChallenge" && "$(MAKE)" -f  "CarpetCleaningChallenge.mk" clean
