	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 13, 0	sdk_version 13, 1
	.intel_syntax noprefix
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset rbp, -16
	mov	rbp, rsp
	.cfi_def_cfa_register rbp
	sub	rsp, 16
	mov	dword ptr [rbp - 4], 0
	lea	rdi, [rip + L_.str]
	call	_puts
	xor	eax, eax
	add	rsp, 16
	pop	rbp
	ret
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"\"Programming is like building a multilingual puzzle"

.subsections_via_symbols
