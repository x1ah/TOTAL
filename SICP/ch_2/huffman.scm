(define (make-leaf symbol weight)
  (list 'leaf symbol weight))

(define (lead? object)
  (eq? (car object) 'leaf))

(define (symbol-leaf x) (cadr x))

(define (weight-leaf x) (caddr x))

(define (make-code-tree left right)
  (list left
        right
        (append (symbol left) (symbols right))
        (+ (weight left) (weight right))))
