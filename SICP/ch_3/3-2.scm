(define (make-monitored func)
  (let ((mf 0))
    (lambda (item)
      (cond ((eq? item 'how-many-calls?) mf)
            ((eq? item 'reset-count) (set! mf 0))
            (else
              (begin (set! mf (+ mf 1))
                     (func item)))))))
