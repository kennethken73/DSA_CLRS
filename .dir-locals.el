((c++-mode . (
              (eval . (progn
                        (setq cmake-ide-build-dir (concat (projectile-project-root) "build")
                              cmake-ide-project-dir (concat (projectile-project-root) "src")
                              projectile-project-configure-cmd (concat "cmake -B ../build" "")
                              projectile-project-compilation-cmd (concat "cmake --build ../build" "")
                              projectile-project-run-cmd (concat "./" "build/DSA_CLRS")
                              )
                        (80-column-rule)
                        (require 'dap-mode)
                        (dap-register-debug-template
                         "C++ Debug Default <project: DSA_CLRS>"
                         (list :type "cppdbg"
                               :request "launch"
                               :name "C++ Debug Default <project: DSA_CLRS>"
                               :MIMode "gdb"
                               :program (concat (projectile-project-root) "build/DSA_CLRS")
                               :cwd (concat (projectile-project-root) ""))
                         )

                        (defun omen-c/cpp-project-run-interactive-executable (arg)
                          "Run project's main executable in an interactive compilation window"
                          (interactive "P")
                          (compile (concat (projectile-project-root) "build/DSA_CLRS") t)
                          (select-window (get-buffer-window "*compilation*")))

                        (spacemacs/set-leader-keys "ocm" 'omen-c/cpp-project-run-interactive-executable)

                        )
                    )
              ))

 (emacs-lisp-mode . (
                     (eval .
                           (100-column-rule)
                           )
                     )
                  )
 )





;; Full configuration properties of vs-code-debugging
;;      @ /.emacs.d/.extensions/vscode/cpptools/extension/package.json

;; TODO  move the function and its keybind out to the omen layer, after figuring out how to create a non-local variable which is set locally (like the others at the top via setq).
;; TODO  change most of this from "nil" to "c-c++". (80-column mode for lisp isn't useful)
