	.text
	.file	"urchan23-3.cpp"
	.section	.text.startup,"ax",@progbits
	.p2align	4, 0x90         # -- Begin function __cxx_global_var_init
	.type	__cxx_global_var_init,@function
__cxx_global_var_init:                  # @__cxx_global_var_init
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movabsq	$_ZStL8__ioinit, %rdi
	callq	_ZNSt8ios_base4InitC1Ev
	movabsq	$_ZNSt8ios_base4InitD1Ev, %rax
	movq	%rax, %rdi
	movabsq	$_ZStL8__ioinit, %rsi
	movabsq	$__dso_handle, %rdx
	callq	__cxa_atexit
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end0:
	.size	__cxx_global_var_init, .Lfunc_end0-__cxx_global_var_init
	.cfi_endproc
                                        # -- End function
	.text
	.globl	_ZplRK1AS1_             # -- Begin function _ZplRK1AS1_
	.p2align	4, 0x90
	.type	_ZplRK1AS1_,@function
_ZplRK1AS1_:                            # @_ZplRK1AS1_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	-16(%rbp), %rax
	movl	(%rax), %ecx
	movq	-24(%rbp), %rax
	addl	(%rax), %ecx
	leaq	-8(%rbp), %rdi
	movl	%ecx, %esi
	callq	_ZN1AC2Ei
	movl	-8(%rbp), %eax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end1:
	.size	_ZplRK1AS1_, .Lfunc_end1-_ZplRK1AS1_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZN1AC2Ei,"axG",@progbits,_ZN1AC2Ei,comdat
	.weak	_ZN1AC2Ei               # -- Begin function _ZN1AC2Ei
	.p2align	4, 0x90
	.type	_ZN1AC2Ei,@function
_ZN1AC2Ei:                              # @_ZN1AC2Ei
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %ecx
	movl	%ecx, (%rax)
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end2:
	.size	_ZN1AC2Ei, .Lfunc_end2-_ZN1AC2Ei
	.cfi_endproc
                                        # -- End function
	.section	.rodata.cst8,"aM",@progbits,8
	.p2align	3               # -- Begin function main
.LCPI3_0:
	.quad	4622494657533077094     # double 11.199999999999999
	.text
	.globl	main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movl	$10, %edi
	callq	_Z4add1IiET_S0_
	movabsq	$_ZSt4cout, %rdi
	movl	%eax, %esi
	callq	_ZNSolsEi
	movq	%rax, %rdi
	movabsq	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %rsi
	callq	_ZNSolsEPFRSoS_E
	movsd	.LCPI3_0(%rip), %xmm0   # xmm0 = mem[0],zero
	movq	%rax, -48(%rbp)         # 8-byte Spill
	callq	_Z4add1IdET_S0_
	movabsq	$_ZSt4cout, %rdi
	callq	_ZNSolsEd
	movq	%rax, %rdi
	movabsq	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %rsi
	callq	_ZNSolsEPFRSoS_E
	leaq	-8(%rbp), %rdi
	movl	$4, %esi
	movq	%rax, -56(%rbp)         # 8-byte Spill
	callq	_ZN1AC2Ei
	leaq	-16(%rbp), %rdi
	movl	$7, %esi
	callq	_ZN1AC2Ei
	leaq	-8(%rbp), %rdi
	leaq	-16(%rbp), %rsi
	callq	_ZplRK1AS1_
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %esi
	movabsq	$_ZSt4cout, %rdi
	callq	_ZNSolsEi
	movq	%rax, %rdi
	movabsq	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %rsi
	callq	_ZNSolsEPFRSoS_E
	movl	-8(%rbp), %ecx
	movl	%ecx, -40(%rbp)
	movl	-40(%rbp), %edi
	movq	%rax, -64(%rbp)         # 8-byte Spill
	callq	_Z4add1I1AET_S1_
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %esi
	movabsq	$_ZSt4cout, %rdi
	callq	_ZNSolsEi
	movq	%rax, %rdi
	movabsq	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %rsi
	callq	_ZNSolsEPFRSoS_E
	xorl	%ecx, %ecx
	movq	%rax, -72(%rbp)         # 8-byte Spill
	movl	%ecx, %eax
	addq	$80, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end3:
	.size	main, .Lfunc_end3-main
	.cfi_endproc
                                        # -- End function
	.section	.text._Z4add1IiET_S0_,"axG",@progbits,_Z4add1IiET_S0_,comdat
	.weak	_Z4add1IiET_S0_         # -- Begin function _Z4add1IiET_S0_
	.p2align	4, 0x90
	.type	_Z4add1IiET_S0_,@function
_Z4add1IiET_S0_:                        # @_Z4add1IiET_S0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	addl	$1, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end4:
	.size	_Z4add1IiET_S0_, .Lfunc_end4-_Z4add1IiET_S0_
	.cfi_endproc
                                        # -- End function
	.section	.rodata.cst8,"aM",@progbits,8
	.p2align	3               # -- Begin function _Z4add1IdET_S0_
.LCPI5_0:
	.quad	4607182418800017408     # double 1
	.section	.text._Z4add1IdET_S0_,"axG",@progbits,_Z4add1IdET_S0_,comdat
	.weak	_Z4add1IdET_S0_
	.p2align	4, 0x90
	.type	_Z4add1IdET_S0_,@function
_Z4add1IdET_S0_:                        # @_Z4add1IdET_S0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movsd	.LCPI5_0(%rip), %xmm1   # xmm1 = mem[0],zero
	movsd	%xmm0, -8(%rbp)
	addsd	-8(%rbp), %xmm1
	movaps	%xmm1, %xmm0
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end5:
	.size	_Z4add1IdET_S0_, .Lfunc_end5-_Z4add1IdET_S0_
	.cfi_endproc
                                        # -- End function
	.section	.text._Z4add1I1AET_S1_,"axG",@progbits,_Z4add1I1AET_S1_,comdat
	.weak	_Z4add1I1AET_S1_        # -- Begin function _Z4add1I1AET_S1_
	.p2align	4, 0x90
	.type	_Z4add1I1AET_S1_,@function
_Z4add1I1AET_S1_:                       # @_Z4add1I1AET_S1_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	%edi, -16(%rbp)
	leaq	-24(%rbp), %rdi
	movl	$1, %esi
	callq	_ZN1AC2Ei
	leaq	-16(%rbp), %rdi
	leaq	-24(%rbp), %rsi
	callq	_ZplRK1AS1_
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end6:
	.size	_Z4add1I1AET_S1_, .Lfunc_end6-_Z4add1I1AET_S1_
	.cfi_endproc
                                        # -- End function
	.section	.text.startup,"ax",@progbits
	.p2align	4, 0x90         # -- Begin function _GLOBAL__sub_I_urchan23_3.cpp
	.type	_GLOBAL__sub_I_urchan23_3.cpp,@function
_GLOBAL__sub_I_urchan23_3.cpp:          # @_GLOBAL__sub_I_urchan23_3.cpp
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	callq	__cxx_global_var_init
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end7:
	.size	_GLOBAL__sub_I_urchan23_3.cpp, .Lfunc_end7-_GLOBAL__sub_I_urchan23_3.cpp
	.cfi_endproc
                                        # -- End function
	.type	_ZStL8__ioinit,@object  # @_ZStL8__ioinit
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	__dso_handle
	.section	.init_array,"aw",@init_array
	.p2align	3
	.quad	_GLOBAL__sub_I_urchan23_3.cpp
	.ident	"clang version 10.0.0-4ubuntu1 "
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym __cxx_global_var_init
	.addrsig_sym __cxa_atexit
	.addrsig_sym _ZplRK1AS1_
	.addrsig_sym _ZNSolsEi
	.addrsig_sym _Z4add1IiET_S0_
	.addrsig_sym _ZNSolsEPFRSoS_E
	.addrsig_sym _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	.addrsig_sym _ZNSolsEd
	.addrsig_sym _Z4add1IdET_S0_
	.addrsig_sym _Z4add1I1AET_S1_
	.addrsig_sym _GLOBAL__sub_I_urchan23_3.cpp
	.addrsig_sym _ZStL8__ioinit
	.addrsig_sym __dso_handle
	.addrsig_sym _ZSt4cout
