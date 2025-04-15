

// Functiont to Find common elements between two arrays.
const getFindCommanElements = (arr1, arr2) => {
    for (let i = 0; i < arr1.length; i++) {
        for (let j = 0; j < arr2.length; j++) {
            if (arr1[i] == arr2[j]) {
                console.log(arr1[i]);
                break;
            }
        }
    }
}
// Let's Start here
arr1 = [1, 2, 3, 4, 5];
arr2 = [3, 4, 5, 6, 7];
getFindCommanElements(arr1,arr2);