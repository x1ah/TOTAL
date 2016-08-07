(define (make-accumulator init)
  (lambda (number)
    (begin (set! init (+ init number)) init)))
