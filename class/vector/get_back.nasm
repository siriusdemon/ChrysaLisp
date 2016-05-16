%include 'inc/func.inc'
%include 'class/class_vector.inc'

	fn_function class/vector/get_back
		;inputs
		;r0 = vector object
		;outputs
		;r0 = vector object
		;r1 = object pointer

		vp_push r0
		vp_cpy [r0 + vector_length], r1
		vp_cpy [r0 + vector_array], r0
		s_call ref, ref, {[r0 + r1 - long_size]}
		vp_cpy r0, r1
		vp_pop r0
		vp_ret

	fn_function_end
