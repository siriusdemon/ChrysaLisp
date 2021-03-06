(include 'class/obj/class.inc)

(def-class 'slave 'obj)
(dec-method 'vtable 'class/slave/vtable)
(dec-method 'create 'class/slave/create 'static nil '(r0))
(dec-method 'init 'class/slave/init 'static '(r0 r1))

(dec-method 'deinit 'class/slave/deinit 'final)

(dec-method 'lisp_create 'class/slave/lisp_create 'static '(r0 r1) '(r0 r1))

(def-struct 'slave 'obj)
	(ptr 'stdin 'stdout 'stderr 'args)
(def-struct-end)

(def-struct 'slave_msg_init)
	(struct 'stdout_id 'id)
	(struct 'stderr_id 'id)
	(struct 'ack_id 'id)
	(uint 'stdin_mbox_id)
	(offset 'args)
(def-struct-end)
