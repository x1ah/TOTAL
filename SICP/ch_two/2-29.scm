(define (make-mobile left right)
  (list left right))

(define (make-branch length structure)
  (list length structure))

;;; a)

(define (left-branch tree)
  (car tree))

(define (right-branch tree)
  ((car (cdr tree))))

(define (branch-length tree)
  (car tree))

(define (branch-structure tree)
  ((car (cdr tree))))

