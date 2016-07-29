(define (square-tree tree)
  (cond ((null? tree) (list ))
        ((not (pair? tree)) (* tree tree))
        (else (cons (square-tree (car tree))
                    (square-tree (cdr tree))))))

(define (square-tree-map tree)
  (map (lambda (sub-tree)
         (if (pair? sub-tree)
           ;;; 这里为 map 特性，如果这个元素为序列，那么就对这个元素再次进行 map 操作。
           (square-tree-map sub-tree)
           (* sub-tree sub-tree)))
       tree))
