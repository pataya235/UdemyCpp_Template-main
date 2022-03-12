	.file	"Function2.cc"
	.text
	.p2align 4
	.def	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0;	.scl	3;	.type	32;	.endef
	.seh_proc	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0:
.LFB2208:
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	subq	$40, %rsp
	.seh_stackalloc	40
	.seh_endprologue
	movq	(%rcx), %rax
	movq	-24(%rax), %rax
	movq	240(%rcx,%rax), %r13
	movq	%rcx, %r12
	testq	%r13, %r13
	je	.L6
	cmpb	$0, 56(%r13)
	je	.L3
	movsbl	67(%r13), %edx
.L4:
	movq	%r12, %rcx
	call	_ZNSo3putEc
	movq	%rax, %rcx
	addq	$40, %rsp
	popq	%r12
	popq	%r13
	jmp	_ZNSo5flushEv
.L3:
	movq	%r13, %rcx
	call	_ZNKSt5ctypeIcE13_M_widen_initEv
	movq	0(%r13), %rax
	movl	$10, %edx
	movq	%r13, %rcx
	call	*48(%rax)
	movsbl	%al, %edx
	jmp	.L4
.L6:
	call	_ZSt16__throw_bad_castv
	nop
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "please enter a number: \0"
	.text
	.p2align 4
	.globl	_Z10user_inputv
	.def	_Z10user_inputv;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z10user_inputv
_Z10user_inputv:
.LFB1751:
	subq	$56, %rsp
	.seh_stackalloc	56
	.seh_endprologue
	movq	.refptr._ZSt4cout(%rip), %rcx
	movl	$23, %r8d
	leaq	.LC0(%rip), %rdx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	movq	.refptr._ZSt3cin(%rip), %rcx
	leaq	44(%rsp), %rdx
	call	_ZNSirsERi
	movl	44(%rsp), %eax
	addq	$56, %rsp
	ret
	.seh_endproc
	.p2align 4
	.globl	_Z11input_checki
	.def	_Z11input_checki;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z11input_checki
_Z11input_checki:
.LFB1752:
	.seh_endprologue
	movl	%ecx, %eax
	notl	%eax
	andl	$1, %eax
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC1:
	.ascii "Is even? \0"
	.section	.text.startup,"x"
	.p2align 4
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB1753:
	pushq	%r12
	.seh_pushreg	%r12
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	movq	.refptr._ZSt4cout(%rip), %r12
	movl	$3, %edx
	movq	%r12, %rcx
	call	_ZNSolsEi
	movq	%rax, %rcx
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
	movl	$9, %r8d
	movq	%r12, %rcx
	leaq	.LC1(%rip), %rdx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	movq	(%r12), %rax
	movq	%r12, %rcx
	movq	-24(%rax), %rdx
	addq	%r12, %rdx
	orl	$1, 24(%rdx)
	xorl	%edx, %edx
	call	_ZNSo9_M_insertIbEERSoT_
	movq	%rax, %rcx
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%r12
	ret
	.seh_endproc
	.p2align 4
	.def	_GLOBAL__sub_I__Z10user_inputv;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I__Z10user_inputv
_GLOBAL__sub_I__Z10user_inputv:
.LFB2205:
	pushq	%r12
	.seh_pushreg	%r12
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %r12
	movq	%r12, %rcx
	call	_ZNSt8ios_base4InitC1Ev
	movq	.refptr.__dso_handle(%rip), %r8
	movq	.refptr._ZNSt8ios_base4InitD1Ev(%rip), %rcx
	movq	%r12, %rdx
	addq	$32, %rsp
	popq	%r12
	jmp	__cxa_atexit
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I__Z10user_inputv
.lcomm _ZStL8__ioinit,1,1
	.ident	"GCC: (GNU) 11.2.0"
	.def	_ZNSo3putEc;	.scl	2;	.type	32;	.endef
	.def	_ZNSo5flushEv;	.scl	2;	.type	32;	.endef
	.def	_ZNKSt5ctypeIcE13_M_widen_initEv;	.scl	2;	.type	32;	.endef
	.def	_ZSt16__throw_bad_castv;	.scl	2;	.type	32;	.endef
	.def	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l;	.scl	2;	.type	32;	.endef
	.def	_ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	_ZNSo9_M_insertIbEERSoT_;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	__cxa_atexit;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZNSt8ios_base4InitD1Ev, "dr"
	.globl	.refptr._ZNSt8ios_base4InitD1Ev
	.linkonce	discard
.refptr._ZNSt8ios_base4InitD1Ev:
	.quad	_ZNSt8ios_base4InitD1Ev
	.section	.rdata$.refptr.__dso_handle, "dr"
	.globl	.refptr.__dso_handle
	.linkonce	discard
.refptr.__dso_handle:
	.quad	__dso_handle
	.section	.rdata$.refptr._ZSt3cin, "dr"
	.globl	.refptr._ZSt3cin
	.linkonce	discard
.refptr._ZSt3cin:
	.quad	_ZSt3cin
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
