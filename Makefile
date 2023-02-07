.PHONY: clean All

All:
	@echo "----------Building project:[ RanedBasedLoops - Debug ]----------"
	@cd "RanedBasedLoops" && "$(MAKE)" -f  "RanedBasedLoops.mk"
clean:
	@echo "----------Cleaning project:[ RanedBasedLoops - Debug ]----------"
	@cd "RanedBasedLoops" && "$(MAKE)" -f  "RanedBasedLoops.mk" clean
