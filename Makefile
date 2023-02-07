.PHONY: clean All

All:
	@echo "----------Building project:[ ConditionalOp - Debug ]----------"
	@cd "ConditionalOp" && "$(MAKE)" -f  "ConditionalOp.mk"
clean:
	@echo "----------Cleaning project:[ ConditionalOp - Debug ]----------"
	@cd "ConditionalOp" && "$(MAKE)" -f  "ConditionalOp.mk" clean
