/**
 * @param {number} millis
 */
async function sleep(m) {
  return new Promise((res, rej) => {
        setTimeout(() => {
            res(0);
        }, m);
        });
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */