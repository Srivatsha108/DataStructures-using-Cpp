.PHONY: clean All

All:
	@echo "----------Building project:[ chaining - Debug ]----------"
	@cd "chaining" && "$(MAKE)" -f  "chaining.mk"
clean:
	@echo "----------Cleaning project:[ chaining - Debug ]----------"
	@cd "chaining" && "$(MAKE)" -f  "chaining.mk" clean
