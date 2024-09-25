<template>
    <div
            class="lc-chat flex h-screen text-black transition-all duration-300 w-full"
        >
        
        <navigation
            :class="{ '-translate-x-full delay-75': false }"
            :users="[]"
            :support="support"
            :conversations="conversations"
            :conversation_active="conversation_active"
            :loading="false"
        /> 
        <Conversation 
        :conversation="conversation"
        :conversation_user="conversation_user"
        :support="support"
        :class="{ 'translate-x-full delay-75': false }"
        /> 
    </div>
</template>

<script>
import Chat from '../components/Chat/index.vue'
import Conversation from '../components/Chat/structure/Conversation.vue';
import Navigation from '../components/Chat/structure/Navigation.vue';


export default {
    name: 'NotFound',
    components : {
        Chat,Conversation,Navigation
    },
    
    data() {
        return {
            something: 'something',
            conversation: {
  current_page: 1,
  data: [
    {
      user_id: 1,
      text: "Welcome to Yooscout! We’re excited to have you here. What are your main goals in football, and how can we help you achieve them?",
      file: null,
      id: 963,
      seen_at: "2024-08-28 11:45:51",
      notified_at: null,
      created_at: "2024-08-28T11:43:20.000000Z",
      updated_at: "2024-08-28T11:45:51.000000Z",
      url: null,
      global: null
    }
  ],
  first_page_url: "/chat/conversation/97?page=1",
  from: 1,
  next_page_url: null,
  path: "/chat/conversation/97",
  per_page: 20,
  prev_page_url: null,
  to: 1
},
            conversation_user:{
  id: 1,
  avatar: "https://stageapi.yooscout.com/storage/profile/1/txeOUx6C13wHf4xR4U6f7OHqVR9nPiUp.jpg",
  username: "yooscout",
  updated_at: "2024-09-24T17:14:42.000000Z",
  name: "Yooscout Support"
},
            support:{
  id: 1,
  username: "yooscout",
  active: 1,
  email: "hello@yooscout.com",
  avatar: "https://stageapi.yooscout.com/storage/profile/1/txeOUx6C13wHf4xR4U6f7OHqVR9nPiUp.jpg",
  ip: "",
  country_code: "",
  email_verified_at: "2021-06-05T09:57:56.000000Z",
  created_at: "2021-06-05T09:57:56.000000Z",
  updated_at: "2024-09-24T17:14:42.000000Z",
  category: "player",
  account: {
    'phone-number': "66666666",
    'phone-code': "+1-684",
    'current-city': "Yerevan",
    'current-country': "Argentina",
    name: "Yooscout",
    surname: "Support",
    title: null,
    summary: "hello@yooscout.com",
    'place-of-birth': "Armenia",
    languages: "[{\"id\":\"45\",\"name\":\"Armenian\",\"code\":\"hy\"}]",
    citizenship: "[{\"id\":\"10\",\"name\":\"Armenia\",\"isd_code\":\"374\",\"code_2\":\"AM\"}]",
    'date-of-birth': "2021-05-31T20:00:00.000Z",
    height: "183",
    foot: null,
    'eu-passport': "",
    'first-position': null,
    'second-position': null,
    'third-position': null,
    'fav-shirt-number': "11",
    'fav-outfitter': null,
    'looking-for-club': "",
    'looking-for-agent': "",
    speed: "2",
    technique: "3",
    shoot: "",
    'head-ball': "",
    scorring: "",
    dribbling: "",
    tackle: "",
    pass: "",
    'current-club': null,
    agent: null
  }
},
        conversations: {
    current_page: 1,
    data: [
      {
        id: 965,
        user_id: 1,
        conversation_id: 99,
        text: "👋",
        file: null,
        seen_at: "2024-08-29 07:15:08",
        notified_at: null,
        created_at: "2024-08-29T07:15:08.000000Z",
        updated_at: "2024-08-29T07:15:08.000000Z",
        conversation: {
          id: 198,
          user_id: 126,
          conversation_id: 99,
          deleted_at: "2024-08-29 07:15:08",
          ignored_at: null,
          created_at: "2024-08-29T07:15:08.000000Z",
          updated_at: "2024-08-29T07:15:08.000000Z",
          user: {
            id: 126,
            username: "keyiy15560787",
            active: 1,
            email: "keyiy15560@orsbap.com",
            avatar: null,
            ip: "87.241.159.43",
            country_code: "AM",
            email_verified_at: "2024-07-31T09:01:04.000000Z",
            created_at: "2024-07-31T09:00:28.000000Z",
            updated_at: "2024-08-15T22:00:02.000000Z",
            account: {
              id: 110,
              user_id: 126,
              category_id: 1,
              options: {
                likes: 3
              },
              created_at: "2024-07-31T09:01:12.000000Z",
              updated_at: "2024-09-10T10:43:37.000000Z",
              attributes: [
                {
                  id: 2910,
                  user_account_id: 110,
                  element_id: 33,
                  value_id: 0,
                  value: null,
                  element: {
                    id: 33,
                    type: "input",
                    name: "current-club",
                    value_type: "relation_connected",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2911,
                  user_account_id: 110,
                  element_id: 5,
                  value_id: 0,
                  value: "Yerevan",
                  element: {
                    id: 5,
                    type: "select",
                    name: "current-city",
                    value_type: null,
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2912,
                  user_account_id: 110,
                  element_id: 8,
                  value_id: 0,
                  value: "Armenia",
                  element: {
                    id: 8,
                    type: "select",
                    name: "current-country",
                    value_type: null,
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2913,
                  user_account_id: 110,
                  element_id: 20,
                  value_id: 0,
                  value: "Mko",
                  element: {
                    id: 20,
                    type: "input",
                    name: "name",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2914,
                  user_account_id: 110,
                  element_id: 21,
                  value_id: 0,
                  value: "Mkoyan",
                  element: {
                    id: 21,
                    type: "input",
                    name: "surname",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2915,
                  user_account_id: 110,
                  element_id: 22,
                  value_id: 10,
                  value: null,
                  element: {
                    id: 22,
                    type: "select",
                    name: "title",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2916,
                  user_account_id: 110,
                  element_id: 24,
                  value_id: 0,
                  value: "Armenia",
                  element: {
                    id: 24,
                    type: "select",
                    name: "place-of-birth",
                    value_type: null,
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2917,
                  user_account_id: 110,
                  element_id: 58,
                  value_id: 0,
                  value: "[{\"id\":\"10\",\"name\":\"Armenia\",\"isd_code\":\"374\",\"code_2\":\"AM\"}]",
                  element: {
                    id: 58,
                    type: "input",
                    name: "citizenship",
                    value_type: "string",
                    min: "0",
                    max: "9999",
                    htmlOptions: {
                      min: "0",
                      max: "9999"
                    }
                  }
                },
                {
                  id: 2918,
                  user_account_id: 110,
                  element_id: 33,
                  value_id: 0,
                  value: null,
                  element: {
                    id: 33,
                    type: "input",
                    name: "current-club",
                    value_type: "relation_connected",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2919,
                  user_account_id: 110,
                  element_id: 33,
                  value_id: 0,
                  value: null,
                  element: {
                    id: 33,
                    type: "input",
                    name: "current-club",
                    value_type: "relation_connected",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2920,
                  user_account_id: 110,
                  element_id: 33,
                  value_id: 0,
                  value: null,
                  element: {
                    id: 33,
                    type: "input",
                    name: "current-club",
                    value_type: "relation_connected",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2921,
                  user_account_id: 110,
                  element_id: 33,
                  value_id: 0,
                  value: null,
                  element: {
                    id: 33,
                    type: "input",
                    name: "current-club",
                    value_type: "relation_connected",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2988,
                  user_account_id: 110,
                  element_id: 79,
                  value_id: 0,
                  value: null,
                  element: {
                    id: 79,
                    type: "input",
                    name: "agent",
                    value_type: "relation_agent",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                }
              ]
            }
          }
        }
      },
      {
        id: 964,
        user_id: 1,
        conversation_id: 98,
        text: "👋",
        file: null,
        seen_at: "2024-08-28 12:38:04",
        notified_at: null,
        created_at: "2024-08-28T12:38:04.000000Z",
        updated_at: "2024-08-28T12:38:04.000000Z",
        conversation: {
          id: 195,
          user_id: 41,
          conversation_id: 98,
          deleted_at: "2024-08-28 12:38:04",
          ignored_at: null,
          created_at: "2024-08-28T12:38:04.000000Z",
          updated_at: "2024-08-28T12:38:04.000000Z",
          user: {
            id: 41,
            username: "ilqefz22n",
            active: 1,
            email: "player@matemat.io",
            avatar: "https://stageapi.yooscout.com/storage/profile/41/4N2VWkXUvjNFsZrUaoCR8btD5MjU6ZMq.jpg",
            ip: "",
            country_code: "",
            email_verified_at: "2021-06-30T10:55:21.000000Z",
            created_at: "2021-06-30T10:54:15.000000Z",
            updated_at: "2024-09-24T17:02:38.000000Z",
            account: {
              id: 37,
              user_id: 41,
              category_id: 1,
              options: {
                likes: 1
              },
              created_at: "2021-06-30T11:05:09.000000Z",
              updated_at: "2024-09-10T10:20:46.000000Z",
              attributes: [
                {
                  id: 908,
                  user_account_id: 37,
                  element_id: 5,
                  value_id: 0,
                  value: "Yerevan",
                  element: {
                    id: 5,
                    type: "select",
                    name: "current-city",
                    value_type: null,
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 909,
                  user_account_id: 37,
                  element_id: 8,
                  value_id: 0,
                  value: "Armenia",
                  element: {
                    id: 8,
                    type: "select",
                    name: "current-country",
                    value_type: null,
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 910,
                  user_account_id: 37,
                  element_id: 20,
                  value_id: 0,
                  value: "Player",
                  element: {
                    id: 20,
                    type: "input",
                    name: "name",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 911,
                  user_account_id: 37,
                  element_id: 21,
                  value_id: 0,
                  value: "Matemat",
                  element: {
                    id: 21,
                    type: "input",
                    name: "surname",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 912,
                  user_account_id: 37,
                  element_id: 22,
                  value_id: 10,
                  value: null,
                  element: {
                    id: 22,
                    type: "select",
                    name: "title",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 913,
                  user_account_id: 37,
                  element_id: 23,
                  value_id: 0,
                  value: "My personal info is here",
                  element: {
                    id: 23,
                    type: "input",
                    name: "summary",
                    value_type: "string",
                    min: null,
                    max: "1024",
                    htmlOptions: {
                      min: null,
                      max: "1024"
                    }
                  }
                },
                {
                  id: 914,
                  user_account_id: 37,
                  element_id: 24,
                  value_id: 0,
                  value: "Armenia",
                  element: {
                    id: 24,
                    type: "select",
                    name: "place-of-birth",
                    value_type: null,
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 915,
                  user_account_id: 37,
                  element_id: 58,
                  value_id: 0,
                  value: "[{\"id\":\"10\",\"name\":\"Armenia\",\"isd_code\":\"374\",\"code_2\":\"AM\"},{\"id\":\"57\",\"name\":\"Germany\",\"isd_code\":\"49\",\"code_2\":\"DE\"}]",
                  element: {
                    id: 58,
                    type: "input",
                    name: "citizenship",
                    value_type: "string",
                    min: "0",
                    max: "9999",
                    htmlOptions: {
                      min: "0",
                      max: "9999"
                    }
                  }
                },
                {
                  id: 916,
                  user_account_id: 37,
                  element_id: 62,
                  value_id: 0,
                  value: "1985-02-28T20:00:00.000Z",
                  element: {
                    id: 62,
                    type: "input",
                    name: "date-of-birth",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 917,
                  user_account_id: 37,
                  element_id: 1,
                  value_id: 0,
                  value: "180",
                  element: {
                    id: 1,
                    type: "input",
                    name: "height",
                    value_type: "integer",
                    min: "50",
                    max: "273",
                    htmlOptions: {
                      min: "50",
                      max: "273"
                    }
                  }
                },
                {
                  id: 918,
                  user_account_id: 37,
                  element_id: 2,
                  value_id: 1,
                  value: null,
                  element: {
                    id: 2,
                    type: "select",
                    name: "foot",
                    value_type: null,
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 919,
                  user_account_id: 37,
                  element_id: 31,
                  value_id: 41,
                  value: null,
                  element: {
                    id: 31,
                    type: "select",
                    name: "first-position",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 920,
                  user_account_id: 37,
                  element_id: 32,
                  value_id: 52,
                  value: null,
                  element: {
                    id: 32,
                    type: "select",
                    name: "second-position",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 921,
                  user_account_id: 37,
                  element_id: 47,
                  value_id: 63,
                  value: null,
                  element: {
                    id: 47,
                    type: "select",
                    name: "third-position",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 925,
                  user_account_id: 37,
                  element_id: 16,
                  value_id: 0,
                  value: "2",
                  element: {
                    id: 16,
                    type: "slider-input",
                    name: "speed",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 926,
                  user_account_id: 37,
                  element_id: 17,
                  value_id: 0,
                  value: "1",
                  element: {
                    id: 17,
                    type: "slider-input",
                    name: "technique",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 927,
                  user_account_id: 37,
                  element_id: 18,
                  value_id: 0,
                  value: "1",
                  element: {
                    id: 18,
                    type: "slider-input",
                    name: "shoot",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 928,
                  user_account_id: 37,
                  element_id: 19,
                  value_id: 0,
                  value: "2",
                  element: {
                    id: 19,
                    type: "slider-input",
                    name: "head-ball",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 929,
                  user_account_id: 37,
                  element_id: 34,
                  value_id: 0,
                  value: "2",
                  element: {
                    id: 34,
                    type: "slider-input",
                    name: "scorring",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 930,
                  user_account_id: 37,
                  element_id: 35,
                  value_id: 0,
                  value: "3",
                  element: {
                    id: 35,
                    type: "slider-input",
                    name: "dribbling",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 931,
                  user_account_id: 37,
                  element_id: 50,
                  value_id: 0,
                  value: "3",
                  element: {
                    id: 50,
                    type: "slider-input",
                    name: "tackle",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 932,
                  user_account_id: 37,
                  element_id: 51,
                  value_id: 0,
                  value: "3",
                  element: {
                    id: 51,
                    type: "slider-input",
                    name: "pass",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 933,
                  user_account_id: 37,
                  element_id: 14,
                  value_id: 0,
                  value: "https://www.youtube.com/watch?v=pnK6R5ej6Hg",
                  element: {
                    id: 14,
                    type: "input",
                    name: "youtube-link-1",
                    value_type: "string",
                    min: "0",
                    max: "100",
                    htmlOptions: {
                      min: "0",
                      max: "100"
                    }
                  }
                },
                {
                  id: 1083,
                  user_account_id: 37,
                  element_id: 25,
                  value_id: 0,
                  value: "93741401",
                  element: {
                    id: 25,
                    type: "input",
                    name: "phone-number",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 1084,
                  user_account_id: 37,
                  element_id: 26,
                  value_id: 0,
                  value: "+374",
                  element: {
                    id: 26,
                    type: "select",
                    name: "phone-code",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 1085,
                  user_account_id: 37,
                  element_id: 28,
                  value_id: 0,
                  value: "https://www.facebook.com/torosyan.vardan",
                  element: {
                    id: 28,
                    type: "input",
                    name: "facebook-link",
                    value_type: "string",
                    min: "0",
                    max: "100",
                    htmlOptions: {
                      min: "0",
                      max: "100"
                    }
                  }
                },
                {
                  id: 1086,
                  user_account_id: 37,
                  element_id: 29,
                  value_id: 0,
                  value: "",
                  element: {
                    id: 29,
                    type: "input",
                    name: "linkedin-link",
                    value_type: "string",
                    min: "0",
                    max: "100",
                    htmlOptions: {
                      min: "0",
                      max: "100"
                    }
                  }
                },
                {
                  id: 1087,
                  user_account_id: 37,
                  element_id: 30,
                  value_id: 0,
                  value: "",
                  element: {
                    id: 30,
                    type: "input",
                    name: "instagram-link",
                    value_type: "string",
                    min: "0",
                    max: "100",
                    htmlOptions: {
                      min: "0",
                      max: "100"
                    }
                  }
                },
                {
                  id: 1088,
                  user_account_id: 37,
                  element_id: 54,
                  value_id: 0,
                  value: "+37495541542",
                  element: {
                    id: 54,
                    type: "input",
                    name: "viber-number",
                    value_type: "string",
                    min: "0",
                    max: "100",
                    htmlOptions: {
                      min: "0",
                      max: "100"
                    }
                  }
                },
                {
                  id: 1089,
                  user_account_id: 37,
                  element_id: 55,
                  value_id: 0,
                  value: "+37495541542",
                  element: {
                    id: 55,
                    type: "input",
                    name: "whatsup-number",
                    value_type: "string",
                    min: "0",
                    max: "100",
                    htmlOptions: {
                      min: "0",
                      max: "100"
                    }
                  }
                },
                {
                  id: 1090,
                  user_account_id: 37,
                  element_id: 60,
                  value_id: 0,
                  value: "",
                  element: {
                    id: 60,
                    type: "checkbox",
                    name: "do-not-publish",
                    value_type: "boolean",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2741,
                  user_account_id: 37,
                  element_id: 33,
                  value_id: 0,
                  value: null,
                  element: {
                    id: 33,
                    type: "input",
                    name: "current-club",
                    value_type: "relation_connected",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2742,
                  user_account_id: 37,
                  element_id: 33,
                  value_id: 0,
                  value: null,
                  element: {
                    id: 33,
                    type: "input",
                    name: "current-club",
                    value_type: "relation_connected",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2805,
                  user_account_id: 37,
                  element_id: 33,
                  value_id: 0,
                  value: null,
                  element: {
                    id: 33,
                    type: "input",
                    name: "current-club",
                    value_type: "relation_connected",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2806,
                  user_account_id: 37,
                  element_id: 33,
                  value_id: 0,
                  value: null,
                  element: {
                    id: 33,
                    type: "input",
                    name: "current-club",
                    value_type: "relation_connected",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2908,
                  user_account_id: 37,
                  element_id: 33,
                  value_id: 0,
                  value: null,
                  element: {
                    id: 33,
                    type: "input",
                    name: "current-club",
                    value_type: "relation_connected",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2923,
                  user_account_id: 37,
                  element_id: 33,
                  value_id: 0,
                  value: null,
                  element: {
                    id: 33,
                    type: "input",
                    name: "current-club",
                    value_type: "relation_connected",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2951,
                  user_account_id: 37,
                  element_id: 79,
                  value_id: 0,
                  value: null,
                  element: {
                    id: 79,
                    type: "input",
                    name: "agent",
                    value_type: "relation_agent",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                }
              ]
            }
          }
        }
      },
      {
        id: 963,
        user_id: 1,
        conversation_id: 97,
        text: "Welcome to Yooscout! We’re excited to have you here. What are your main goals in football, and how can we help you achieve them?",
        file: null,
        seen_at: "2024-08-28 11:45:51",
        notified_at: null,
        created_at: "2024-08-28T11:43:20.000000Z",
        updated_at: "2024-08-28T11:45:51.000000Z",
        conversation: {
          id: 193,
          user_id: 1,
          conversation_id: 97,
          deleted_at: "2024-08-28 11:43:20",
          ignored_at: null,
          created_at: "2024-08-28T11:43:20.000000Z",
          updated_at: "2024-08-28T11:43:20.000000Z",
          user: {
            id: 1,
            username: "yooscout",
            active: 1,
            email: "hello@yooscout.com",
            avatar: "https://stageapi.yooscout.com/storage/profile/1/txeOUx6C13wHf4xR4U6f7OHqVR9nPiUp.jpg",
            ip: "",
            country_code: "",
            email_verified_at: "2021-06-05T09:57:56.000000Z",
            created_at: "2021-06-05T09:57:56.000000Z",
            updated_at: "2024-09-24T17:14:42.000000Z",
            account: {
              id: 1,
              user_id: 1,
              category_id: 1,
              options: [],
              created_at: "2021-06-05T09:57:56.000000Z",
              updated_at: "2021-06-05T09:57:56.000000Z",
              attributes: [
                {
                  id: 1906,
                  user_account_id: 1,
                  element_id: 25,
                  value_id: 0,
                  value: "66666666",
                  element: {
                    id: 25,
                    type: "input",
                    name: "phone-number",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 1907,
                  user_account_id: 1,
                  element_id: 26,
                  value_id: 0,
                  value: "+1-684",
                  element: {
                    id: 26,
                    type: "select",
                    name: "phone-code",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2458,
                  user_account_id: 1,
                  element_id: 5,
                  value_id: 0,
                  value: "Yerevan",
                  element: {
                    id: 5,
                    type: "select",
                    name: "current-city",
                    value_type: null,
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2459,
                  user_account_id: 1,
                  element_id: 8,
                  value_id: 0,
                  value: "Argentina",
                  element: {
                    id: 8,
                    type: "select",
                    name: "current-country",
                    value_type: null,
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2460,
                  user_account_id: 1,
                  element_id: 20,
                  value_id: 0,
                  value: "Yooscout",
                  element: {
                    id: 20,
                    type: "input",
                    name: "name",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2461,
                  user_account_id: 1,
                  element_id: 21,
                  value_id: 0,
                  value: "Support",
                  element: {
                    id: 21,
                    type: "input",
                    name: "surname",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2462,
                  user_account_id: 1,
                  element_id: 22,
                  value_id: 10,
                  value: null,
                  element: {
                    id: 22,
                    type: "select",
                    name: "title",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2463,
                  user_account_id: 1,
                  element_id: 23,
                  value_id: 0,
                  value: "hello@yooscout.com",
                  element: {
                    id: 23,
                    type: "input",
                    name: "summary",
                    value_type: "string",
                    min: null,
                    max: "1024",
                    htmlOptions: {
                      min: null,
                      max: "1024"
                    }
                  }
                },
                {
                  id: 2464,
                  user_account_id: 1,
                  element_id: 24,
                  value_id: 0,
                  value: "Armenia",
                  element: {
                    id: 24,
                    type: "select",
                    name: "place-of-birth",
                    value_type: null,
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2465,
                  user_account_id: 1,
                  element_id: 57,
                  value_id: 0,
                  value: "[{\"id\":\"45\",\"name\":\"Armenian\",\"code\":\"hy\"}]",
                  element: {
                    id: 57,
                    type: "input",
                    name: "languages",
                    value_type: "string",
                    min: "0",
                    max: "9999",
                    htmlOptions: {
                      min: "0",
                      max: "9999"
                    }
                  }
                },
                {
                  id: 2466,
                  user_account_id: 1,
                  element_id: 58,
                  value_id: 0,
                  value: "[{\"id\":\"10\",\"name\":\"Armenia\",\"isd_code\":\"374\",\"code_2\":\"AM\"}]",
                  element: {
                    id: 58,
                    type: "input",
                    name: "citizenship",
                    value_type: "string",
                    min: "0",
                    max: "9999",
                    htmlOptions: {
                      min: "0",
                      max: "9999"
                    }
                  }
                },
                {
                  id: 2467,
                  user_account_id: 1,
                  element_id: 62,
                  value_id: 0,
                  value: "2021-05-31T20:00:00.000Z",
                  element: {
                    id: 62,
                    type: "input",
                    name: "date-of-birth",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2477,
                  user_account_id: 1,
                  element_id: 1,
                  value_id: 0,
                  value: "183",
                  element: {
                    id: 1,
                    type: "input",
                    name: "height",
                    value_type: "integer",
                    min: "50",
                    max: "273",
                    htmlOptions: {
                      min: "50",
                      max: "273"
                    }
                  }
                },
                {
                  id: 2478,
                  user_account_id: 1,
                  element_id: 2,
                  value_id: 2,
                  value: null,
                  element: {
                    id: 2,
                    type: "select",
                    name: "foot",
                    value_type: null,
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2479,
                  user_account_id: 1,
                  element_id: 12,
                  value_id: 0,
                  value: "",
                  element: {
                    id: 12,
                    type: "checkbox",
                    name: "eu-passport",
                    value_type: "boolean",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2480,
                  user_account_id: 1,
                  element_id: 31,
                  value_id: 82,
                  value: null,
                  element: {
                    id: 31,
                    type: "select",
                    name: "first-position",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2481,
                  user_account_id: 1,
                  element_id: 32,
                  value_id: 51,
                  value: null,
                  element: {
                    id: 32,
                    type: "select",
                    name: "second-position",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2482,
                  user_account_id: 1,
                  element_id: 47,
                  value_id: 63,
                  value: null,
                  element: {
                    id: 47,
                    type: "select",
                    name: "third-position",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2483,
                  user_account_id: 1,
                  element_id: 48,
                  value_id: 0,
                  value: "11",
                  element: {
                    id: 48,
                    type: "input",
                    name: "fav-shirt-number",
                    value_type: "integer",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2484,
                  user_account_id: 1,
                  element_id: 49,
                  value_id: 18,
                  value: null,
                  element: {
                    id: 49,
                    type: "select",
                    name: "fav-outfitter",
                    value_type: "string",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2485,
                  user_account_id: 1,
                  element_id: 59,
                  value_id: 0,
                  value: "",
                  element: {
                    id: 59,
                    type: "checkbox",
                    name: "looking-for-club",
                    value_type: "boolean",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2486,
                  user_account_id: 1,
                  element_id: 61,
                  value_id: 0,
                  value: "",
                  element: {
                    id: 61,
                    type: "checkbox",
                    name: "looking-for-agent",
                    value_type: "boolean",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2487,
                  user_account_id: 1,
                  element_id: 16,
                  value_id: 0,
                  value: "2",
                  element: {
                    id: 16,
                    type: "slider-input",
                    name: "speed",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 2488,
                  user_account_id: 1,
                  element_id: 17,
                  value_id: 0,
                  value: "3",
                  element: {
                    id: 17,
                    type: "slider-input",
                    name: "technique",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 2489,
                  user_account_id: 1,
                  element_id: 18,
                  value_id: 0,
                  value: "",
                  element: {
                    id: 18,
                    type: "slider-input",
                    name: "shoot",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 2490,
                  user_account_id: 1,
                  element_id: 19,
                  value_id: 0,
                  value: "",
                  element: {
                    id: 19,
                    type: "slider-input",
                    name: "head-ball",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 2491,
                  user_account_id: 1,
                  element_id: 34,
                  value_id: 0,
                  value: "",
                  element: {
                    id: 34,
                    type: "slider-input",
                    name: "scorring",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 2492,
                  user_account_id: 1,
                  element_id: 35,
                  value_id: 0,
                  value: "",
                  element: {
                    id: 35,
                    type: "slider-input",
                    name: "dribbling",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 2493,
                  user_account_id: 1,
                  element_id: 50,
                  value_id: 0,
                  value: "",
                  element: {
                    id: 50,
                    type: "slider-input",
                    name: "tackle",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 2494,
                  user_account_id: 1,
                  element_id: 51,
                  value_id: 0,
                  value: "",
                  element: {
                    id: 51,
                    type: "slider-input",
                    name: "pass",
                    value_type: "integer",
                    min: "0",
                    max: "50",
                    htmlOptions: {
                      min: "0",
                      max: "50"
                    }
                  }
                },
                {
                  id: 2924,
                  user_account_id: 1,
                  element_id: 33,
                  value_id: 0,
                  value: null,
                  element: {
                    id: 33,
                    type: "input",
                    name: "current-club",
                    value_type: "relation_connected",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                },
                {
                  id: 2925,
                  user_account_id: 1,
                  element_id: 79,
                  value_id: 0,
                  value: null,
                  element: {
                    id: 79,
                    type: "input",
                    name: "agent",
                    value_type: "relation_agent",
                    min: null,
                    max: null,
                    htmlOptions: {
                      min: null,
                      max: null
                    }
                  }
                }
              ]
            }
          }
        }
      }
    ],
    first_page_url: "/chat/conversations?page=1",
    from: 1,
    next_page_url: null,
    path: "/chat/conversations",
    per_page: 20,
    prev_page_url: null,
    to: 3
  },
        conversation_active:99,

        };
    },
    head: {
        title() {
            return this.$t('Testing chat');
        },
    },
};
</script>
<style scoped src="../components/Chat/css/chat.css"></style>
<style lang="scss" scoped>
    span {
        font-size: 2rem;
    }
</style>
