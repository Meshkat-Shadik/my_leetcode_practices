/**
 * @param {number[]} asteroids
 * @return {number[]}
 */
var asteroidCollision = function(as) {
    var s = [];
    
    for(let i=0;i<as.length;i++){
        const a = as[i];
        
        if((s.length===0 || s[s.length-1]<0) && a<0){
            s.push(a);
        }
        else if(a>0){
            s.push(a);
        }
        else {
            const p = s.pop();
            if(Math.abs(p) > Math.abs(a)){
                s.push(p);
            }
            else if(Math.abs(p)<Math.abs(a)){
                i--;
            }
            else{
                continue;
            }
        }
    }
    return s;
};