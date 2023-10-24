let base64 = require('js-base64');
let string = "V2UgYXJlIGFub21hbG91cy4gV2UgYXJlIHJlZ2lvbi4gRm9yZ2l2ZSBhbmQgZm9yZ2V0LiBFeHBlY3RvIHBhdHJvbnVtLgo=";
let decodedString = base64.Base64.decode(string);
console.log(decodedString);