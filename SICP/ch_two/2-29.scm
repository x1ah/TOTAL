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

;;; b)

(define (branch-weight branch)
  ;;; 分支依然为活动体
  (cond ((pair? (branch-structure branch)) (total-weight branch))
        (branch-structure branch))

(define (total-weight mobile)
  (+ (branch-weight (left-branch mobile)
                    (right-branch mobile))))

;;; c)

(define (branch-torque branch)
  (* (branch-length branch) (branch-weight branch)))

(define (balance-mobile? mobile)
  (= (branch-torque (left-branch mobile))
     (branch-torque (right-branch mobile))))
