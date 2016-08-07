(define (for-each func items)
  (if (null? items) (newline)
    ((func (car items))
     (for-each func (cdr items)))))
