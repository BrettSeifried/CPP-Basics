.PHONY: clean All

All:
	@echo "----------Building project:[ LoopChallenege - Debug ]----------"
	@cd "LoopChallenege" && "$(MAKE)" -f  "LoopChallenege.mk"
clean:
	@echo "----------Cleaning project:[ LoopChallenege - Debug ]----------"
	@cd "LoopChallenege" && "$(MAKE)" -f  "LoopChallenege.mk" clean
