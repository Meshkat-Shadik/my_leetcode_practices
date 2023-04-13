/**
 * @param {number} millis
 */
async function sleep(m) {
    await new Promise(resolve => setTimeout(resolve, m));
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */