let h1 = document.querySelector("h1");

function keyboard(dets){
    if(dets.key === " "){
        h1.textContent = "SPACE";
    }else {
        h1.textContent = dets.key;
    }
}
window.addEventListener("keydown", keyboard)