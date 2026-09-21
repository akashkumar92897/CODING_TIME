let btn = document.querySelector("#btn");
let fileinp = document.querySelector("#fileinp");

function fileinput(){
    fileinp.click();
}

btn.addEventListener("click", fileinput);

fileinp.addEventListener("change", function(dets){
    const file = dets.target.files[0];
    if (file){
        btn.textContent = file.name;
    }
})