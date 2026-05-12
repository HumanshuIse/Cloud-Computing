public class EmailNotificationService {

    public static void sendEmail(
        String recipientEmail,
        String subject, String body,
        Boolean includeAttachment
    ) {
        Messaging.SingleEmailMessage mail = new Messaging.SingleEmailMessage();

        mail.setToAddresses(
            new List<String>{ recipientEmail }
        );

        mail.setSubject(subject);
        mail.setPlainTextBody(body);

        // Add attachment only if requested
        if(includeAttachment == true) {
            Messaging.EmailFileAttachment attachment = new Messaging.EmailFileAttachment();
            attachment.setFileName('sample.txt');

            attachment.setBody(
                Blob.valueOf(
                    'This is a sample attachment sent using Salesforce Apex.'
                )
            );

            attachment.setContentType('text/plain');
            mail.setFileAttachments(
                new Messaging.EmailFileAttachment[]{ attachment }
            );
        }

        Messaging.sendEmail(
            new List<Messaging.SingleEmailMessage>{ mail }
        );

        if(includeAttachment == true) {
            System.debug('Email With Attachment Sent Successfully');
        } else {
            System.debug('Email Sent Successfully');
        }
    }
}