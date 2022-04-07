function X(selector) {
    const self = {
        element : document.querySelector(selector),
        html : (text)=> {
            self.element.innerHTML = text;
        },
        on: (event, callback)=> {
            document.addEventListener(event, callback)
        },
        hide: ()=> {
            self.element.style.display = "none"
        },
        show: ()=> {
            self.element.style.display = "block"
        },
        print: (text)=> {
            console.log(text)
        }
    }
    return self
}