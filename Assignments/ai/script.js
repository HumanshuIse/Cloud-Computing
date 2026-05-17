function reply()
{
    let q = document
            .getElementById("question")
            .value
            .toLowerCase();

    let response =
    "Sorry, I could not understand your question.";

    const rules = [

        {
            keywords:["hello","hi","hey"],

            answer:
            "Hello! Welcome to customer support."
        },

        {
            keywords:["order","track","delivery"],

            answer:
            "You can track your order in My Orders section."
        },

        {
            keywords:["refund","return"],

            answer:
            "Refund process takes 5-7 working days."
        },

        {
            keywords:["payment","pay","upi"],

            answer:
            "We support Card, UPI and Net Banking."
        },

        {
            keywords:["contact","support","call"],

            answer:
            "Customer support number: 1800-123-456"
        },

        {
            keywords:["thank","thanks"],

            answer:
            "Happy to help."
        }

    ];



    for(let item of rules)
    {
        for(let word of item.keywords)
        {
            if(q.includes(word))
            {
                response=item.answer;
                break;
            }
        }

        if(response !==
        "Sorry, I could not understand your question.")
        {
            break;
        }
    }

    document
    .getElementById("answer")
    .innerText=response;
}