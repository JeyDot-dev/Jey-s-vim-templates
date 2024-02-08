# Jey-s-vim-templates
just a repo containing my own vim templates.
## Installation

Pull the folder in your HOME (or anywhere else but you'll have to change path in the config)
```shell
git pull https://github.com/JeyDot-dev/Jey-s-vim-templates.git templates
```
Then copy the following config to your .vimrc
```vimrc
command! -nargs=0 InsertHpp silent call CreateHppTemplate()
command! -nargs=0 InsertCpp silent call CreateCppTemplate()

let	g:templatePath = expand('~/templates/')  "<------ replace '~/templates/' with path to the templates folder
function! CreateHppTemplate()
    let className = expand('%:t:r')
    let headerGuard = toupper(className) . '_HPP'
    let templatePath = g:templatePath . expand('default_class.hpp')
    let content = readfile(templatePath)

    for i in range(len(content))
        let content[i] = substitute(content[i], 'DEFAULT_CLASS_HPP', headerGuard, 'g')
        let content[i] = substitute(content[i], 'className', className, 'g')
    endfor
    call append(line('.'), content)
endfunction
function! CreateCppTemplate()
    let className = expand('%:t:r')
    let templatePath = g:templatePath . expand('default_class.cpp')
    let content = readfile(templatePath)

    for i in range(len(content))
        let content[i] = substitute(content[i], 'className', className, 'g')
    endfor
    call append(line('.'), content)
endfunction
```
## Usage
1. [optional] Modify the templates in the template folder to make it better fit to your style.
2. Create or open a file with the correct class name with vim. (example: ```vim ExampleClass.hpp```)
3. If it's a .cpp in normal mode do ```:InsertCpp``` if it's a .hpp do ```:InsertHpp``` instead.
