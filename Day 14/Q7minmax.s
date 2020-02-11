	.file	"Q7minmax.c"
	.text
	.section	.rodata
.LC0:
	.string	"Enter you string"
.LC1:
	.string	"%c"
.LC2:
	.string	"Max length:%i"
.LC3:
	.string	"Min length:%i"
	.text
	.globl	main
	.type	main, @function
main:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$1, -44(%rbp)
	movl	$0, -40(%rbp)
	movl	$0, -36(%rbp)
	movl	$1, %edi
	call	malloc@PLT
	movq	%rax, -16(%rbp)
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	leaq	-45(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movzbl	-45(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, -32(%rbp)
	jmp	.L2
.L3:
	movl	-44(%rbp), %eax
	addl	$1, %eax
	movslq	%eax, %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	realloc@PLT
	movq	%rax, -16(%rbp)
	addl	$1, -44(%rbp)
	movl	-40(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -40(%rbp)
	movslq	%eax, %rdx
	movq	-16(%rbp), %rax
	addq	%rax, %rdx
	movzbl	-45(%rbp), %eax
	movb	%al, (%rdx)
	leaq	-45(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movzbl	-45(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, -32(%rbp)
.L2:
	cmpl	$10, -32(%rbp)
	jne	.L3
	subl	$1, -44(%rbp)
	movl	$2147483647, -28(%rbp)
	movl	$-2147483648, -24(%rbp)
	movl	$0, -20(%rbp)
	movl	$0, -36(%rbp)
	jmp	.L4
.L8:
	addl	$1, -20(%rbp)
	movl	-36(%rbp), %eax
	movslq	%eax, %rdx
	movq	-16(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$32, %al
	jne	.L5
	subl	$1, -20(%rbp)
	movl	-28(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jle	.L6
	movl	-20(%rbp), %eax
	movl	%eax, -28(%rbp)
.L6:
	movl	-24(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jge	.L7
	movl	-20(%rbp), %eax
	movl	%eax, -24(%rbp)
.L7:
	movl	$0, -20(%rbp)
.L5:
	addl	$1, -36(%rbp)
.L4:
	movl	-36(%rbp), %eax
	cmpl	-44(%rbp), %eax
	jle	.L8
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-28(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L10
	call	__stack_chk_fail@PLT
.L10:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
