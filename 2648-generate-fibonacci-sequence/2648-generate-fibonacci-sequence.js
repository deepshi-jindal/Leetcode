/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    let n1=0,n2=1;
    let next;
    while(true){
        next=n1+n2;
        yield n1;  //yield is used to pause and execute(generate) a function.
        n1=n2;
        n2=next;
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */